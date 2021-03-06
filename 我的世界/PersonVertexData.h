#ifndef PERSONVERTEXDATA_H
#define PERSONVERTEXDATA_H

// 人物模型顶点数据

static const float head[6][48] =
{
	{
		// 位置                  // 纹理
	   -0.25f, -0.125f,  0.25f,  1.0f,  1.0f,
		0.25f, -0.125f,  0.25f,  0.0f,  1.0f,
		0.25f,  0.375f,  0.25f,  0.0f,  0.0f,
		0.25f,  0.375f,  0.25f,  0.0f,  0.0f,
	   -0.25f,  0.375f,  0.25f,  1.0f,  0.0f,
	   -0.25f, -0.125f,  0.25f,  1.0f,  1.0f,
	},
	{
	   -0.25f,  0.375f,  0.25f,  0.0f,  0.0f,
	   -0.25f,  0.375f, -0.25f,  1.0f,  0.0f,
	   -0.25f, -0.125f, -0.25f,  1.0f,  1.0f,
	   -0.25f, -0.125f, -0.25f,  1.0f,  1.0f,
	   -0.25f, -0.125f,  0.25f,  0.0f,  1.0f,
	   -0.25f,  0.375f,  0.25f,  0.0f,  0.0f,
	},
	{
	   -0.25f, -0.125f, -0.25f,  1.0f,  1.0f,
		0.25f, -0.125f, -0.25f,  0.0f,  1.0f,
		0.25f,  0.375f, -0.25f,  0.0f,  0.0f,
		0.25f,  0.375f, -0.25f,  0.0f,  0.0f,
	   -0.25f,  0.375f, -0.25f,  1.0f,  0.0f,
	   -0.25f, -0.125f, -0.25f,  1.0f,  1.0f,
	},
	{
		0.25f,  0.375f,  0.25f,  0.0f,  0.0f,
		0.25f,  0.375f, -0.25f,  1.0f,  0.0f,
		0.25f, -0.125f, -0.25f,  1.0f,  1.0f,
		0.25f, -0.125f, -0.25f,  1.0f,  1.0f,
		0.25f, -0.125f,  0.25f,  0.0f,  1.0f,
		0.25f,  0.375f,  0.25f,  0.0f,  0.0f,
	},
	{
	   -0.25f, -0.125f, -0.25f,  1.0f,  0.0f,
		0.25f, -0.125f, -0.25f,  0.0f,  0.0f,
		0.25f, -0.125f,  0.25f,  0.0f,  1.0f,
		0.25f, -0.125f,  0.25f,  1.0f,  1.0f,
	   -0.25f, -0.125f,  0.25f,  0.0f,  1.0f,
	   -0.25f, -0.125f, -0.25f,  0.0f,  0.0f,
	},
	{
	   -0.25f,  0.375f, -0.25f,  0.0f,  1.0f,
		0.25f,  0.375f, -0.25f,  1.0f,  1.0f,
		0.25f,  0.375f,  0.25f,  1.0f,  0.0f,
		0.25f,  0.375f,  0.25f,  1.0f,  0.0f,
	   -0.25f,  0.375f,  0.25f,  0.0f,  0.0f,
	   -0.25f,  0.375f, -0.25f,  0.0f,  1.0f
	},
};

static const float body[6][48] =
{
	{
		// 位置                  // 纹理
	   -0.25f, -0.50f,  0.125f,  1.0f,  1.0f,
		0.25f, -0.50f,  0.125f,  0.0f,  1.0f,
		0.25f,  0.25f,  0.125f,  0.0f,  0.0f,
		0.25f,  0.25f,  0.125f,  0.0f,  0.0f,
	   -0.25f,  0.25f,  0.125f,  1.0f,  0.0f,
	   -0.25f, -0.50f,  0.125f,  1.0f,  1.0f,
	},
	{
	   -0.25f,  0.25f,  0.125f,  0.0f,  0.0f,
	   -0.25f,  0.25f, -0.125f,  1.0f,  0.0f,
	   -0.25f, -0.50f, -0.125f,  1.0f,  1.0f,
	   -0.25f, -0.50f, -0.125f,  1.0f,  1.0f,
	   -0.25f, -0.50f,  0.125f,  0.0f,  1.0f,
	   -0.25f,  0.25f,  0.125f,  0.0f,  0.0f,
	},
	{
	   -0.25f, -0.50f, -0.125f,  1.0f,  1.0f,
		0.25f, -0.50f, -0.125f,  0.0f,  1.0f,
		0.25f,  0.25f, -0.125f,  0.0f,  0.0f,
		0.25f,  0.25f, -0.125f,  0.0f,  0.0f,
	   -0.25f,  0.25f, -0.125f,  1.0f,  0.0f,
	   -0.25f, -0.50f, -0.125f,  1.0f,  1.0f,
	},
	{
		0.25f,  0.25f,  0.125f,  0.0f,  0.0f,
		0.25f,  0.25f, -0.125f,  1.0f,  0.0f,
		0.25f, -0.50f, -0.125f,  1.0f,  1.0f,
		0.25f, -0.50f, -0.125f,  1.0f,  1.0f,
		0.25f, -0.50f,  0.125f,  0.0f,  1.0f,
		0.25f,  0.25f,  0.125f,  0.0f,  0.0f,
	},
	{
	   -0.25f, -0.50f, -0.125f,  1.0f,  0.0f,
		0.25f, -0.50f, -0.125f,  0.0f,  0.0f,
		0.25f, -0.50f,  0.125f,  0.0f,  1.0f,
		0.25f, -0.50f,  0.125f,  1.0f,  1.0f,
	   -0.25f, -0.50f,  0.125f,  0.0f,  1.0f,
	   -0.25f, -0.50f, -0.125f,  0.0f,  0.0f,
	},
	{
	   -0.25f,  0.25f, -0.125f,  0.0f,  1.0f,
		0.25f,  0.25f, -0.125f,  1.0f,  1.0f,
		0.25f,  0.25f,  0.125f,  1.0f,  0.0f,
		0.25f,  0.25f,  0.125f,  1.0f,  0.0f,
	   -0.25f,  0.25f,  0.125f,  0.0f,  0.0f,
	   -0.25f,  0.25f, -0.125f,  0.0f,  1.0f
	},
};

static const float arm[6][48] =
{
	{
	   // 位置                  // 纹理
	   -0.50f, -0.75f,  0.125f,  1.0f,  1.0f,
	   -0.25f, -0.75f,  0.125f,  0.0f,  1.0f,
	   -0.25f,  0.00f,  0.125f,  0.0f,  0.0f,
	   -0.25f,  0.00f,  0.125f,  0.0f,  0.0f,
	   -0.50f,  0.00f,  0.125f,  1.0f,  0.0f,
	   -0.50f, -0.75f,  0.125f,  1.0f,  1.0f,
	},
	{
	   -0.50f,  0.00f,  0.125f,  0.0f,  0.0f,
	   -0.50f,  0.00f, -0.125f,  1.0f,  0.0f,
	   -0.50f, -0.75f, -0.125f,  1.0f,  1.0f,
	   -0.50f, -0.75f, -0.125f,  1.0f,  1.0f,
	   -0.50f, -0.75f,  0.125f,  0.0f,  1.0f,
	   -0.50f,  0.00f,  0.125f,  0.0f,  0.0f,
	},
	{
	   -0.50f, -0.75f, -0.125f,  1.0f,  1.0f,
	   -0.25f, -0.75f, -0.125f,  0.0f,  1.0f,
	   -0.25f,  0.00f, -0.125f,  0.0f,  0.0f,
	   -0.25f,  0.00f, -0.125f,  1.0f,  0.0f,
	   -0.50f,  0.00f, -0.125f,  0.0f,  0.0f,
	   -0.50f, -0.75f, -0.125f,  0.0f,  1.0f,
	},
	{
	   -0.25f,  0.00f,  0.125f,  0.0f,  0.0f,
	   -0.25f,  0.00f, -0.125f,  1.0f,  0.0f,
	   -0.25f, -0.75f, -0.125f,  1.0f,  1.0f,
	   -0.25f, -0.75f, -0.125f,  1.0f,  1.0f,
	   -0.25f, -0.75f,  0.125f,  0.0f,  1.0f,
	   -0.25f,  0.00f,  0.125f,  0.0f,  0.0f,
	},
	{
	   -0.50f, -0.75f, -0.125f,  1.0f,  0.0f,
	   -0.25f, -0.75f, -0.125f,  0.0f,  0.0f,
	   -0.25f, -0.75f,  0.125f,  0.0f,  1.0f,
	   -0.25f, -0.75f,  0.125f,  1.0f,  1.0f,
	   -0.50f, -0.75f,  0.125f,  0.0f,  1.0f,
	   -0.50f, -0.75f, -0.125f,  0.0f,  0.0f,
	},
	{
	   -0.50f,  0.00f, -0.125f,  0.0f,  1.0f,
	   -0.25f,  0.00f, -0.125f,  1.0f,  1.0f,
	   -0.25f,  0.00f,  0.125f,  1.0f,  0.0f,
	   -0.25f,  0.00f,  0.125f,  1.0f,  0.0f,
	   -0.50f,  0.00f,  0.125f,  0.0f,  0.0f,
	   -0.50f,  0.00f, -0.125f,  0.0f,  1.0f
	},
};

static const float leg[6][48] =
{
	{
		// 位置                  // 纹理
	   -0.25f, -0.75f,  0.125f,  1.0f,  1.0f,
	   -0.00f, -0.75f,  0.125f,  0.0f,  1.0f,
	   -0.00f,  0.00f,  0.125f,  0.0f,  0.0f,
	   -0.00f,  0.00f,  0.125f,  0.0f,  0.0f,
	   -0.25f,  0.00f,  0.125f,  1.0f,  0.0f,
	   -0.25f, -0.75f,  0.125f,  1.0f,  1.0f,
	},
	{
	   -0.25f,  0.00f,  0.125f,  0.0f,  0.0f,
	   -0.25f,  0.00f, -0.125f,  1.0f,  0.0f,
	   -0.25f, -0.75f, -0.125f,  1.0f,  1.0f,
	   -0.25f, -0.75f, -0.125f,  1.0f,  1.0f,
	   -0.25f, -0.75f,  0.125f,  0.0f,  1.0f,
	   -0.25f,  0.00f,  0.125f,  0.0f,  0.0f,
	},
	{
	   -0.25f, -0.75f, -0.125f,  1.0f,  1.0f,
	   -0.00f, -0.75f, -0.125f,  0.0f,  1.0f,
	   -0.00f,  0.00f, -0.125f,  0.0f,  0.0f,
	   -0.00f,  0.00f, -0.125f,  1.0f,  0.0f,
	   -0.25f,  0.00f, -0.125f,  0.0f,  0.0f,
	   -0.25f, -0.75f, -0.125f,  0.0f,  1.0f,
	},
	{
	   -0.00f,  0.00f,  0.125f,  0.0f,  0.0f,
	   -0.00f,  0.00f, -0.125f,  1.0f,  0.0f,
	   -0.00f, -0.75f, -0.125f,  1.0f,  1.0f,
	   -0.00f, -0.75f, -0.125f,  1.0f,  1.0f,
	   -0.00f, -0.75f,  0.125f,  0.0f,  1.0f,
	   -0.00f,  0.00f,  0.125f,  0.0f,  0.0f,
	},
	{
	   -0.25f, -0.75f, -0.125f,  1.0f,  0.0f,
	   -0.00f, -0.75f, -0.125f,  0.0f,  0.0f,
	   -0.00f, -0.75f,  0.125f,  0.0f,  1.0f,
	   -0.00f, -0.75f,  0.125f,  1.0f,  1.0f,
	   -0.25f, -0.75f,  0.125f,  0.0f,  1.0f,
	   -0.25f, -0.75f, -0.125f,  0.0f,  0.0f,
	},
	{
	   -0.25f,  0.00f, -0.125f,  0.0f,  1.0f,
	   -0.00f,  0.00f, -0.125f,  1.0f,  1.0f,
	   -0.00f,  0.00f,  0.125f,  1.0f,  0.0f,
	   -0.00f,  0.00f,  0.125f,  1.0f,  0.0f,
	   -0.25f,  0.00f,  0.125f,  0.0f,  0.0f,
	   -0.25f,  0.00f, -0.125f,  0.0f,  1.0f
	},
};

static const cv::Rect personRect[4][6]
{
	{
		{  8,  8,  8, 8 },
		{  0,  8,  8, 8 },
		{ 24,  8,  8, 8 },
		{ 16,  8,  8, 8 },
		{ 16,  0,  8, 8 },
		{  8,  0,  8, 8 },
	},			  	  
	{			  	  
		{ 20, 20,  8, 12 },
		{ 16, 20,  4, 12 },
		{ 32, 20,  8, 12 },
		{ 28, 20,  4, 12 },
		{ 28, 16,  8,  4 },
		{ 20, 16,  8,  4 },
	},			  	  
	{			  	  
		{ 40, 20,  4, 12 },
		{ 40, 20,  4, 12 },
		{ 40, 20,  4, 12 },
		{ 40, 20,  4, 12 },
		{ 48, 16,  4,  4 },
		{ 44, 16,  4,  4 },
	},			  	  
	{			  	  
		{  0, 20,  4, 12 },
		{  0, 20,  4, 12 },
		{  0, 20,  4, 12 },
		{  0, 20,  4, 12 },
		{  8, 16,  4,  4 },
		{  4, 16,  4,  4 },
	}
};

#endif // !PERSONVERTEXDATA_H