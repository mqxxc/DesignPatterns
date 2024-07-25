#pragma once
#include <List>

class ObserveBase;
//主题，用于分发更新信息
class Theme
{
public:
	enum EType
	{
		ePush,
		ePull
	};
	Theme();
	~Theme();

	void AddObserve(ObserveBase* pObserve);		//添加订阅者
	void DelObserve(ObserveBase* pObserve);		//删除订阅者
	void OnChangeState(int num);				//通知所有订阅者更新
	inline void SetType(EType type) { m_eType = type; };
	inline void SetChanged() { m_bChange = true; };
	inline int GetNum() { return m_nNum; };

protected:
	std::list<ObserveBase*> m_listObserves;
	bool m_bChange = false;
	EType m_eType = ePush;
	int m_nNum;
};