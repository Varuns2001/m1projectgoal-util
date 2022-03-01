#include "unity.h"<br>
#include "dice.h"<br>

void setUp(void){};<br>

void tearDown(void){};<br>
void test_diceoutput(void)<br>
{<br>
    TEST_ASSERT_GREATER_THAN_INT(0,dice_output());<br>
}<br>
void test_diceoutput1(void)<br>
{<br>
    TEST_ASSERT_LESS_OR_EQUAL_INT(6,dice_output());<br>
}<br>

int main()<br>
{<br>
    UNITY_BEGIN();<br>
    RUN_TEST(test_diceoutput);<br>
    RUN_TEST(test_diceoutput1);<br>
    return UNITY_END();<br>
}<br>
