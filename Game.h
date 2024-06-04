#pragma once
#include "SDL/SDL.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"
#include "SDL/SDL_image.h"
#include "fstream"
#include <string>

struct Vector2
{
	float x;
	float y;
};

class Game
{
public:
	Game();
	bool Initialize();
	void RunLoop();
	void Shutdown();
private:
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();

	SDL_Window* mWindow;
	SDL_Renderer* mRenderer;
	Uint32 mTicksCount;
	
	bool mIsRunning;
	int mPaddleDir;
	int mCurrentScore;
	int mHiScore;
	Vector2 mPaddlePos;
	Vector2 mBallPos;
	Vector2 mBallVel;

	SDL_Texture* mCurrentScoreTexture;
	int mCurrentScoreSize[2];
	
	SDL_Texture* mHiScoreTexture;
	int mHiScoreSize[2];

	TTF_Font* mFont;

};
