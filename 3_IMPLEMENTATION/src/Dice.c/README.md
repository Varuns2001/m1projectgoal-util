#include"dice.h"<br>
#include<time.h><br>
#include<stdlib.h><br>
int dice_output()<br>
{<br>
    int upp = 6, low = 1, dice;<br>
    srand (time (0));<br>
    A:dice = (rand () % (upp - low + 1)) + low;<br>
    if (dice == 0)<br>
      goto A;v<br>
    else<br>
      return dice;<br>
}
