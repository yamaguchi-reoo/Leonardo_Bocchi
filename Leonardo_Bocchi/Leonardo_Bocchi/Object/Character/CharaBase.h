#pragma once
#include "../GameObject.h"
#include "../../Utility/UserTemplate.h"

class CharaBase :
    public GameObject
{
protected:
	int hp = 0;
	float g_velocity = 0.0f;       //重力加速度

	bool jump_flag = false;        //ジャンプフラグ
	bool damage_flg = false;	//ダメージを受けたかどうか

	int animation_count = 0;    //アニメーションカウント
public:
	//初期化処理
	virtual void Initialize(Vector2D _location, Vector2D _box_size) override;
	//更新処理
	virtual void Update()override;
	//描画処理
	virtual void Draw(Vector2D offset, double rate) const override;
	//終了時処理
	virtual void Finalize()override;

	virtual void OnHitCollision(GameObject* hit_object)override;
};

