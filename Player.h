#pragma once
#include"CharaBase.h"

#define HEIGHT 720
#define WIDTH 1280

//スティックの傾き具合からプレイヤーの状態を取得
#define LEFT_MOVE -2000
#define RIGHT_MOVE 2000
#define UP_MOVE -2000
#define DOWN_MOVE 2000

class Player :public CharaBase
{
private:
    
    int P_L_Stick;
    //(仮)デジタル方向ボタン右
    int	P_Right_Btn;
    //(仮)デジタル方向ボタン左
    int P_Left_Btn;
    //(仮)デジタル方向ボタン上
    int P_Up_Btn;
    //(仮)デジタル方向ボタン下
    int P_Down_Btn;
    //(仮)Aボタン
    int	P_A_Btn;	//単押し
    
    int P_FPS;
    int P_location_X;
    int P_location_Y;


    int P_MoveR_Flg;
    int P_MoveL_Flg;

    float P_YSpeed;
    float P_XSpeed;

    int MouseX;
    int MouseY;


public:
    // コンストラクタ
    Player();

    // デストラクタ
    ~Player();

    // 更新処理を実行する
    void Update();

    void Player_Move();

    // 描画処理を実行する
    void Draw() const;
};

