//
// Created by malajabi on 11/13/2018.
//

#include "blogpost.h"
 BlogPost::BlogPost(std::string authorName, std::string title, std::string text, std::string publicationDate)
{
    _authorName = authorName;
    _title = title;
    _text = text;
    _publicationDate = publicationDate;
}

std::string BlogPost::getAuthor()
{
    return _authorName;
}
std::string BlogPost::getTitle()
{
    return _title;
}
std::string BlogPost::getText()
{
    return _text;
}
std::string BlogPost::getPublicationDate()
{
    return _publicationDate;
}