#pragma once
#include <iostream>
using namespace std;


class Text_editor
{
    string text;

public:
    Text_editor()
    {
        text = "Text";
    }

    Text_editor(Text_editor* editor)
    {
        this->text = editor->getText();
    }

    void setText(string text)
    {
        this->text = text;
    }

    string getText()
    {
        return this->text;
    }
};

