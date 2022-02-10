#include <conio.h><br>
#include <stdio.h><br>
#include <stdlib.h><br>
#include <unistd.h><br>
  
int i, j, height = 20, width = 20;<br>
int gameover, score;<br>
int x, y, eggx, eggy, flag;<br>
  

void setup()<br>
{<br>
    gameover = 0;<br>
  
   
    x = height / 2;<br>
    y = width / 2;<br>
label1:<br>
    eggx = rand() % 20;<br>
    if (eggx == 0)<br>
        goto label1;<br>
label2:<br>
    eggy = rand() % 20;<br>
    if (eggy == 0)<br>
        goto label2;<br>
    score = 0;<br>
}<br>
  

void draw()<br>
{<br>
    system("cls");<br>
    for (i = 0; i < height; i++) {<br>
        for (j = 0; j < width; j++) {<br>
            if (i == 0 || i == width - 1<br>
                || j == 0<br>
                || j == height - 1) {<br>
                printf("#");<br>
            }<br>
            else {<br>
                if (i == x && j == y)<br>
                    printf("0");<br>
                else if (i == eggx<br>
                         && j == eggy)<br><br>
                    printf("*");<br>
                else<br>
                    printf(" ");<br>
            }<br>
        }<br>
        printf("\n");<br>
    }<br>
  
    
    printf("score = %d", score);<br>
    printf("\n");<br>
    printf("press X to quit the game");<br>
}<br)
  

void input()<br>
{<br>
    if (kbhit()) {<br>
        switch (getch()) {<br>
        case 'a':<br>
            flag = 1;<br>
            break;<br>
        case 's':<br>
            flag = 2;<br>
            break;<br>
        case 'd':<br>
            flag = 3;<br>
            break;<br>
        case 'w':<br>
            flag = 4;<br>
            break;<br>
        case 'x':<br>
            gameover = 1;<br>
            break;<br>
        }<br>
    }<br>
}<br>
  

void logic()<br>
{<br>
    sleep(0.01);<br>
    switch (flag) {<br>
    case 1:<br>
        y--;<br>
        break;<br>
    case 2:<br>
        x++;<br>
        break;<br>
    case 3:<br>
        y++;<br>
        break;<br>
    case 4:<br>
        x--;<br>
        break;<br>
    default:<br>
        break;<br>
    }<br>
  
   
    if (x < 0 || x > height<br>
        || y < 0 || y > width)<br>
        gameover = 1;<br>
  
    
    if (x == eggx && y == eggy) {<br>
    label3:<br>
        eggx = rand() % 20;<br>
        if (eggx == 0)<br>
            goto label3;<br>
  
    
    label4:<br>
        eggy = rand() % 20;<br>
        if (eggy == 0)<br>
            goto label4;<br>
        score += 10;<br>
    }<br>
}<br>
  

void main()<br>
{<br>
    int m, n;<br>
  
    setup();<br>
  

    while (!gameover) {<br>
  
        
        draw();<br>
        input();<br>
        logic();<br>
    }<br>
}<br>
