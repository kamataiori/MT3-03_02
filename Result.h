#pragma once
#include "MathFunc.h"
#include "Vector3Ope.h"

class Result
{
public:



	Vector3 a = { 0.2f, 1.0f, 0.0f };
	Vector3 b = { 2.4f, 3.1f, 1.2f };
	Vector3 c = a + b;
	Vector3 d = a - b;
	Vector3 e = a * 2.4f;
	Vector3 rotate = { 0.4f, 1.43f, -0.8f };
	Matrix4x4 rotateXMatrix = MakeRotateXMatrix(rotate.x);
	Matrix4x4 rotateYMatrix = MakeRotateYMatrix(rotate.y);
	Matrix4x4 rotateZMatrix = MakeRotateZMatrix(rotate.z);
	Matrix4x4 rotateMatrix = rotateXMatrix * rotateYMatrix * rotateZMatrix;


	Vector3 cameraRotate{ 0.26f, 0.0f, 0.0f };
	Vector3 cameraTranslate{ 0.0f,1.9f, -6.49f };
	Vector3 cameraPosition = { 0,0,-10.0f };


	Vector3 translates[3] = 
	{
		{0.2f, 1.0f, 0.0f},
		{0.4f, 0.0f, 0.0f},
		{0.3f, 0.0f, 0.0f}
	};

	Vector3 rotates[3] =
	{
		{0.0f, 0.0f, -6.8f},
		{0.0f, 0.0f, -1.4f},
		{0.0f, 0.0f, 0.0f}
	};

	Vector3 scales[3] =
	{
		{1.0f, 1.0f, 1.0f},
		{1.0f, 0.0f, 1.0f},
		{1.0f, 1.0f, 1.0f}
	};



	void Initialize();

	void Update();

	void Draw();
};


