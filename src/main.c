#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_video.h>
#include <stdio.h>
#include <SDL2/SDL.h>


Uint32 COLOR_WHITE = 0xffffff;


int draw_point(SDL_Surface* surface, int x, int y){
    SDL_Rect rect = (SDL_Rect){x,y,1,1};
    SDL_FillRect(surface, &rect, COLOR_WHITE);

}

int main(){
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("3D rotating cube", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 900, 600, 0);
    SDL_Surface* surface = SDL_GetWindowSurface(window);
    SDL_UpdateWindowSurface(window);
    SDL_Delay(5000);

}





