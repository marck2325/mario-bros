#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;



    while (true && frame<=80)
    {
        auto can = Canvas(200,80);
        can.DrawPointCircle(10+frame,10,10);
        can.DrawPointCircle(30+frame,10,10);

        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::BlueViolet, border(vbox(canvas(&can))));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);


        frame++;
    }
frame= 0;
    while (true && frame<=20)
    {
        auto can = Canvas(200,80);
        can.DrawPointCircle(90,10+frame,10);
        can.DrawPointCircle(110,10+frame,10);

        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::BlueViolet, border(vbox(canvas(&can))));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);


        frame++;
    }

    return 0;
}