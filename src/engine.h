/*
 *  engine.h
 *
 *  Created on: Jun 26, 2013
 *      Author: Denis aka caat
 */

#ifndef ENGiNE_H_
#define ENGINE_H_

#define PITCH_UP_LIMIT (-50 * D2R)
#define PITCH_DOWN_LIMIT (90 * D2R)
#define CORRECTION_STEP 1.0F

extern int debugPrint;
extern int debugPerf;
extern int debugSense;
extern int debugCnt;
extern int debugRC;
extern int debugOrient;
extern int debugSetpoints;
extern int debugAutoPan;
extern int debugGravityVector;

void Init_Orientation(void);
void engineProcess(float dt);
//void Update_Orientation(float dt);
#endif /* ENGINE_H_ */
