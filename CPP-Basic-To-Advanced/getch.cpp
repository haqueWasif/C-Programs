#include <iostream>
#include <conio.h>
#include <unistd.h>
#include <string.h>

using namespace std;

int x, y, row=30, col=30, gameover=0, score=0;
string snk = "0";

void draw()
{
    system("cls");

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i==1 or i==row or j==1 or j==col) {  
                cout<<"* ";
            }
            else {
                if (i==x and j==y){
                    cout<<snk<<" ";
                }
                else if (i==row/3 and j==col/3){
                    cout<<"1 ";
                }
                else {
                    cout<< "  ";
                }
            }
        }
        cout<<endl;
    }
    if (x==row/3 and y==col/3){
        snk = snk + '0';
        score = score + 1;
        cout<<"Your score is "<<score<<endl;
    }
}

void setup()
{
    x = row/2;
    y = col/2;
}
void input()
{
    sleep(0.01);
    if (kbhit())
    {    
        switch(getch())
        {
            case 's':
                x++;
                break;
            case 'w':
                x--;
                break;
            case 'a':
                y--;
                break;
            case 'd':
                y++;
                break;
            case 'x':
                gameover = 1;
                break;
        }
    }
}

int main(){
    setup();
    while(!gameover)
    { 
        draw();
        input();
    }
    return 0;
}