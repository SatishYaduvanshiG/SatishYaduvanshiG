/* abstract factory design pattern(creational design pattern)*/
//abstract factory creates a set of factory classes based on user input and each fatory class creates the required objects
#include <iostream>
using namespace std;
class IButton
{
    public:
    virtual void press()=0;
};

class WinButton : public IButton
{
    void press()
    {
        cout<<"WinButton has pressed"<<endl;
    }
};

class MacButton : public IButton
{
    void press()
    {
        cout<<"MacButton has pressed"<<endl;
    }
};

class ITextBox
{
  public:
  virtual void showText()=0;
};

class WinTextBox : public ITextBox
{
    void showText()
    {
        cout<<"showing WinTextBox"<<endl;
    }
};

class MacTextBox : public ITextBox
{
    void showText()
    {
        cout<<"showing MacTextBox"<<endl;
    }
};

class IFactory
{
    public:
    virtual IButton* createButton()=0;
    virtual ITextBox*  createTextBox()=0;
};

class WinFactory : public IFactory
{
    public:
    IButton* createButton()
    {
        return new WinButton();
    }
    
    ITextBox* createTextBox()
    {
        return new WinTextBox();
    }
};

class MacFactory : public IFactory
{
    public:
    IButton* createButton()
    {
        return new MacButton();
    }
    
    ITextBox* createTextBox()
    {
        return new MacTextBox();
    }
};

class GUIAbstractFactory
{
 public:
 static IFactory* CreateFactory(string osType)
 {
    if(osType == "windows")
    {
        return new WinFactory();
    }
    else if(osType=="mac")
    {
        return new MacFactory();
    }
    return new MacFactory();
 }
    
};

int main()
{
   cout<<"enter a machine os"<<endl;
   string osType;
   cin>>osType;
   IFactory* factory = GUIAbstractFactory ::CreateFactory(osType);
   IButton* button = factory->createButton();
   button->press();
   ITextBox* textbox = factory->createTextBox();
   textbox->showText();
   return 0;
}
