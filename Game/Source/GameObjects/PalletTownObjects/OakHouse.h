#pragma once
class GameObject;
class Mesh;
class ResourceManager;
class TileMap;

using namespace std;

class OakHouse : public GameObject
{
public:
	OakHouse(ResourceManager* myResourceManager, TileMap* myTileMap, GameCore* myGame, Mesh* myMesh, GLuint aTexture);
	~OakHouse();

	virtual void Update(float deltatime) override;

	virtual void Draw(vec2 camPos, vec2 projecScale) override;


private:
	const unsigned short OakHouseMap[7]{ 0, 1, 2, 3, 4, 5, 6 };

	const unsigned short OakHouse_NumTiles = 7;

	ResourceManager* m_MyResourceManager;
	TileMap* m_MyTileMap;
	vector<Frame> m_MyFrames;

	vec2 m_MyTileUVOffset;
	vec2 m_MyTileUVScale;

	vec2 OakHousePosition;
};
