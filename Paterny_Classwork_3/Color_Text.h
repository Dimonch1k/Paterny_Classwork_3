#pragma once
#include <iostream>
using namespace std;

#include "Text_editor.h"
class Color_Text : public Text_editor
{
public:
    Color_Text(Text_editor* editor) : Text_editor(editor)
    {
        setText(getText() + " Color Text");
    }
};
