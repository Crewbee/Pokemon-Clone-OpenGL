#pragma once
class GameObject;
class Mesh;
class ResourceManager;
class TileMap;

using namespace std;

class PlayerHouse : public GameObject
{
public:
	PlayerHouse(ResourceManager* aSpriteMap, TileMap* myTileMap, GameCore* myGame, Mesh* myMesh, GLuint aTexture);
	~PlayerHouse();

	void Update(float deltatime);

	void Draw(vec2 camPos, vec2 projecScale);


private:

	const unsigned short PlayerHouseMap[5] = {	0, 1, 2, 3, 4};

	const unsigned short PlayerHouse_NumTiles = 5;

	ResourceManager* m_MyResourceManager;
	TileMap* m_MyTileMap;

	vector<Frame>m_MyFrames;

	vec2 m_MyTileUVOffset;
	vec2 m_MyTileUVScale;
	vec2 m_PlayerHousePosition;

};