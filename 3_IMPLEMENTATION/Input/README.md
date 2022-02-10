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
            gameover = 1><br>
            break;<br>
        }<br>
    }<br>
}<br>
