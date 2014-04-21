#pragma once

#ifdef BARO
void Baro_Common(void);
int Baro_update(void);
int32_t Baro_calculateAltitude(void);
bool isBaroCalibrationComplete(void);
void performBaroCalibrationCycle(void);
#endif