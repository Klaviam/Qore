#ifndef GAME_H
#define GAME_H
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

class Game
{
    public:
        Game();
        ~Game();
        void Initialize(const int winWidth, const int winHeight);
        void ProcessInput();
        void Update();
        void Render();
        void Destroy();

        bool IsRunning() const;
        
    private:
        bool isRunning;

        SDL_Window *window;
        SDL_Renderer *renderer;
};
#endif