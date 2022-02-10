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
