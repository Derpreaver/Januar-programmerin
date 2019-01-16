#include "enable_time.h"

void enable_timer(int state)
{
    if (state == 1) // turn timer on
    {
        int priority = 2;
        RCC->APB1ENR |= RCC_APB1Periph_TIM2;
        TIM2->CR1 = 0x0000;
        TIM2->ARR = 0x0009C3FF;
        TIM2->PSC = 0x0000;
        TIM2->DIER |= 0x0001;
        NVIC_SetPriority(TIM2_IRQn,priority);
        NVIC_EnableIRQ(TIM2_IRQn);
        TIM2->CR1 |= 0x0001;
    }
    else // turn timer off
    {
        TIM2->CR1 &= ~0x0001;
    }
}
