#pragma once

class ZGameEngine
{

public:

	ZGameEngine();

	~ZGameEngine();

	/* Initialize game engine */
	void Init();

	/* Update game engine */
	void Tick();

	/* Shutdown game engine */
	void Shutdown();


};