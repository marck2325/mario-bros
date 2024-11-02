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
    int x1=40,h=80,r=120;

while(true){
    auto can = Canvas(200,80);
     can.DrawPointLine(30+frame,10,35+frame,15);

    while (true && frame<=300)
    {
        auto can = Canvas(200,80);
        //can.DrawPointCircle(10+frame,10,10);
        //can.DrawPointCircle(30+frame,10,10);
        //can.DrawPointCircle(30,10,10);
        can.DrawPointLine(10,80,10,50);
        can.DrawPointLine(40,80,40,50);
        can.DrawPointLine(10,50,25,30);
        can.DrawPointLine(40,50,25,30);

        can.DrawPointLine(10+x1,80,10+x1,50);
        can.DrawPointLine(40+x1,80,40+x1,50);
        can.DrawPointLine(10+x1,50,25+x1,30);
        can.DrawPointLine(40+x1,50,25+x1,30);

        can.DrawPointLine(10+h,80,10+h,50);
        can.DrawPointLine(40+h,80,40+h,50);
        can.DrawPointLine(10+h,50,25+h,30);
        can.DrawPointLine(40+h,50,25+h,30);

        //vallas
        can.DrawPointLine(0,80,5,75);
        can.DrawPointLine(10,80,5,75);

        can.DrawPointLine(0+x1,80,5+x1,75);
        can.DrawPointLine(10+x1,80,5+x1,75);

        can.DrawPointLine(0+h,80,5+h,75);
        can.DrawPointLine(10+h,80,5+h,75);

        can.DrawPointLine(r+0,80,5+r,75);
        can.DrawPointLine(10+r,80,5+r,75);

        can.DrawPointLine(r+10,80,15+r,75);
        can.DrawPointLine(20+r,80,15+r,75);

        can.DrawPointLine(r+20,80,25+r,75);
        can.DrawPointLine(30+r,80,25+r,75);

        can.DrawPointLine(r+30,80,35+r,75);
        can.DrawPointLine(40+r,80,35+r,75);

        can.DrawPointLine(r+40,80,45+r,75);
        can.DrawPointLine(50+r,80,45+r,75);

        can.DrawPointLine(r+50,80,55+r,75);
        can.DrawPointLine(60+r,80,55+r,75);

        can.DrawPointLine(r+60,80,65+r,75);
        can.DrawPointLine(70+r,80,65+r,75);




        //puertas

        can.DrawPointLine(20+x1,80,20+x1,60);
        can.DrawPointLine(20+x1,60,30+x1,60);
        can.DrawPointLine(30+x1,80,30+x1,60);
        can.DrawPointCircle(27+x1,70,1);
        
        can.DrawPointLine(20,80,20,60);
        can.DrawPointLine(20,60,30,60);
        can.DrawPointLine(30,80,30,60);
        can.DrawPointCircle(27,70,1);
        
        can.DrawPointLine(20+h,80,20+h,60);
        can.DrawPointLine(20+h,60,30+h,60);
        can.DrawPointLine(30+h,80,30+h,60);
        can.DrawPointCircle(27+h,70,1);


        //ventanas

        can.DrawPointLine(30+x1,45,30+x1,55);
        can.DrawPointLine(20+x1,45,20+x1,55);
        can.DrawPointLine(20+x1,45,30+x1,45);
        can.DrawPointLine(20+x1,55,30+x1,55);

        can.DrawPointLine(25+x1,45,25+x1,55);
        can.DrawPointLine(20+x1,50,30+x1,50);

        can.DrawPointLine(30,45,30,55);
        can.DrawPointLine(20,45,20,55);
        can.DrawPointLine(20,45,30,45);
        can.DrawPointLine(20,55,30,55);

        can.DrawPointLine(25,45,25,55);
        can.DrawPointLine(20,50,30,50);

        can.DrawPointLine(30+h,45,30+h,55);
        can.DrawPointLine(20+h,45,20+h,55);
        can.DrawPointLine(20+h,45,30+h,45);
        can.DrawPointLine(20+h,55,30+h,55);

        can.DrawPointLine(25+h,45,25+h,55);
        can.DrawPointLine(20+h,50,30+h,50);

        //sol
        can.DrawBlockCircle(20+frame,0,10);

        can.DrawPointLine(0+frame,15,10+frame,10);

        can.DrawPointLine(20+frame,20,20+frame,10);

        //can.DrawPointLine(30+frame,10,35+frame,15);

        //can.DrawPointLine(0+frame,15,10+frame,10);



        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::BlueViolet, border(vbox(canvas(&can))));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);


        //frame++;
    }
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