#include <iostream>
#include <SDL.h>

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

//Draws geometry on the canvas
void draw();

//Starts up SDL and creates window
bool init();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
SDL_Window* gWindow = nullptr;

//The window renderer
SDL_Renderer* gRenderer = nullptr;

void draw()
{
    // Create a square drawing function that takes 2 parameters:
    // The square size, and the fill color,
    // and draws a square of that size and color to the center of the canvas.
    // Create a loop that fills the canvas with rainbow colored squares.

    int x1 = 0;
    int y1 = 0;
    int size = 640;

    /*SDL_Color Red = {255, 0, 0, 255};
    SDL_Color Orange = {255, 165, 0, 255};
    SDL_Color Yellow = {255, 255, 0, 255};
    SDL_Color Green = {0,205, 0, 255};
    SDL_Color Blue = {0, 136, 250, 255};
    SDL_Color Indigo = {75, 0, 130, 255};
    SDL_Color Purple = {128, 0, 128, 255};*/

    int Colors[7][4] = {{255, 0, 0, 255}, {255, 116, 0, 255}, {255, 255, 0, 255}, {0,205, 0, 255}, {0, 136, 250, 255},
                              {75, 0, 130, 255}, {128, 0, 128, 255}};

    for(int i = 0; i < 13; i++){
        //SDL_SetRenderDrawColor(gRenderer, 0 + i*20, 55 + i, 100 - 2*i, 0xFF);
        //SDL_SetRenderDrawColor(gRenderer, 0+i*36, 0 + i*36, 0 +36*i, 0xFF);
        if(i < 7){
        (SDL_SetRenderDrawColor(gRenderer, Colors[i][0], Colors[i][1], Colors[i][2], 255));
        } else if(i >= 7){
            (SDL_SetRenderDrawColor(gRenderer, Colors[i-7][0], Colors[i-7][1], Colors[i-7][2], 255));
        }
        size -= 50;
        x1 = SCREEN_WIDTH/2 - size/2;
        y1 = SCREEN_HEIGHT/2 - size/2;
        SDL_Rect RectangleX = {x1, y1, size, size};
        SDL_RenderFillRect(gRenderer, &RectangleX);
    }
}

bool init()
{
    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create window
    gWindow = SDL_CreateWindow( "Rainbow box function", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    if( gWindow == nullptr )
    {
        std::cout << "Window could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create renderer for window
    gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
    if( gRenderer == nullptr )
    {
        std::cout << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Initialize renderer color
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

    return true;
}

void close()
{
    //Destroy window
    SDL_DestroyRenderer( gRenderer );
    SDL_DestroyWindow( gWindow );
    gWindow = nullptr;
    gRenderer = nullptr;

    SDL_Quit();
}

int main( int argc, char* args[] )
{
    //Start up SDL and create window
    if( !init() )
    {
        std::cout << "Failed to initialize!" << std::endl;
        close();
        return -1;
    }

    //Main loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;

    //While application is running
    while( !quit ) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        //Clear screen
        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_RenderClear(gRenderer);

        draw();

        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}