#pragma once
#include <iostream>
using namespace std;

#include "Text_editor.h"
class Chat_Gpt : public Text_editor
{
public:
    Chat_Gpt(Text_editor* editor) : Text_editor(editor)
    {
        setText(getText() + " Chat Gpt");
    }
};

