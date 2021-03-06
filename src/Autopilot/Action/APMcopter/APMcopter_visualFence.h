
#ifndef OPENKAI_SRC_AUTOPILOT_ACTION_APMCOPTER_VISUALFENCE_H_
#define OPENKAI_SRC_AUTOPILOT_ACTION_APMCOPTER_VISUALFENCE_H_

#include "../../../Base/common.h"
#include "../../../AI/_MatrixNet.h"
#include "../ActionBase.h"
#include "APMcopter_base.h"

#define N_TERRAIN 16

namespace kai
{

struct TERRAIN
{
	uint16_t m_iClass;
	uint8_t	m_action;
};

class APMcopter_visualFence: public ActionBase
{
public:
	APMcopter_visualFence();
	~APMcopter_visualFence();

	bool init(void* pKiss);
	bool link(void);
	void update(void);
	bool draw(void);

private:
	APMcopter_base* m_pAPM;
	_MatrixNet*	m_pMN;

	TERRAIN m_pTerrain[N_TERRAIN];
	int m_nTerrain;

};

}

#endif

