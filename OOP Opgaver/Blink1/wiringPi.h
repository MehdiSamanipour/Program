#pragma once


#ifndef	__WIRING_PI_H__
#define	__WIRING_PI_H__

#ifndef	TRUE
#  define	TRUE	(1==1)
#  define	FALSE	(!TRUE)
#endif

#define	WPI_MODE_PINS		 0
#define	WPI_MODE_GPIO		 1
#define	WPI_MODE_GPIO_SYS	 2
#define	WPI_MODE_PHYS		 3
#define	WPI_MODE_PIFACE		 4
#define	WPI_MODE_UNINITIALISED	-1

#define	INPUT			 0
#define	OUTPUT			 1
#define	PWM_OUTPUT		 2
#define	GPIO_CLOCK		 3
#define	SOFT_PWM_OUTPUT		 4
#define	SOFT_TONE_OUTPUT	 5
#define	PWM_TONE_OUTPUT		 6

#define	LOW			 0
#define	HIGH			 1

#define	PUD_OFF			 0
#define	PUD_DOWN		 1
#define	PUD_UP			 2

#define	PWM_MODE_MS		0
#define	PWM_MODE_BAL		1

#define	INT_EDGE_SETUP		0
#define	INT_EDGE_FALLING	1
#define	INT_EDGE_RISING		2
#define	INT_EDGE_BOTH		3

#define	PI_MODEL_A		0
#define	PI_MODEL_B		1
#define	PI_MODEL_AP		2
#define	PI_MODEL_BP		3
#define	PI_MODEL_2		4
#define	PI_ALPHA		5
#define	PI_MODEL_CM		6
#define	PI_MODEL_07		7
#define	PI_MODEL_3		8
#define	PI_MODEL_ZERO		9

#define	PI_VERSION_1		0
#define	PI_VERSION_1_1		1
#define	PI_VERSION_1_2		2
#define	PI_VERSION_2		3

#define	PI_MAKER_SONY		0
#define	PI_MAKER_EGOMAN		1
#define	PI_MAKER_MBEST		2
#define	PI_MAKER_UNKNOWN	3

extern const char* piModelNames[16];
extern const char* piRevisionNames[16];
extern const char* piMakerNames[16];
extern const int   piMemorySize[8];

struct wiringPiNodeStruct
{
	int     pinBase;
	int     pinMax;

	int          fd;
	unsigned int data0;
	unsigned int data1;
	unsigned int data2;
	unsigned int data3;

	void   (*pinMode)         (struct wiringPiNodeStruct* node, int pin, int mode);
	void   (*pullUpDnControl) (struct wiringPiNodeStruct* node, int pin, int mode);
	int    (*digitalRead)     (struct wiringPiNodeStruct* node, int pin);
	void   (*digitalWrite)    (struct wiringPiNodeStruct* node, int pin, int value);
	void   (*pwmWrite)        (struct wiringPiNodeStruct* node, int pin, int value);
	int    (*analogRead)      (struct wiringPiNodeStruct* node, int pin);
	void   (*analogWrite)     (struct wiringPiNodeStruct* node, int pin, int value);

	struct wiringPiNodeStruct* next;
};

extern struct wiringPiNodeStruct* wiringPiNodes;

#ifdef __cplusplus
extern "C" {
#endif

	bool isDay(void);
	bool isNight(void);
	bool Open(void);
	void Close(void);
	void lcdInit(int);
	void lcdShutdown(void);
	void lcdClear(void);
	void lcdGotoXY(int, int);
	void lcdWriteString(const char*);
	void lcdBackLight(int);
	void lcdBlockCursor(int);
	void lcdBlink(int);
	void ledOn(int, int);
	void ledOff(int);
	int keyPressed(int);
	int switchOn(void);
	double getTemperature(void);
	int getIntensity(void);
	void Wait(int);

	extern int wiringPiFailure(int fatal, const char* message, ...);
	extern struct wiringPiNodeStruct* wiringPiFindNode(int pin);
	extern struct wiringPiNodeStruct* wiringPiNewNode(int pinBase, int numPins);
	extern int  wiringPiSetup(void);
	extern int  wiringPiSetupSys(void);
	extern int  wiringPiSetupGpio(void);
	extern int  wiringPiSetupPhys(void);
	extern void pinModeAlt(int pin, int mode);
	extern void pinMode(int pin, int mode);
	extern void pullUpDnControl(int pin, int pud);
	extern int  digitalRead(int pin);
	extern void digitalWrite(int pin, int value);
	extern void pwmWrite(int pin, int value);
	extern int  analogRead(int pin);
	extern void analogWrite(int pin, int value);
	extern int  wiringPiSetupPiFace(void);
	extern int  wiringPiSetupPiFaceForGpioProg(void);
	extern int  piBoardRev(void);
	extern void piBoardId(int* model, int* rev, int* mem, int* maker, int* overVolted);
	extern int  wpiPinToGpio(int wpiPin);
	extern int  physPinToGpio(int physPin);
	extern void setPadDrive(int group, int value);
	extern int  getAlt(int pin);
	extern void pwmToneWrite(int pin, int freq);
	extern void digitalWriteByte(int value);
	extern unsigned int  digitalReadByte(void);
	extern void pwmSetMode(int mode);
	extern void pwmSetRange(unsigned int range);
	extern void pwmSetClock(int divisor);
	extern void gpioClockSet(int pin, int freq);
	extern int  waitForInterrupt(int pin, int mS);
	extern int  wiringPiISR(int pin, int mode, void (*function)(void));
	extern int  piThreadCreate(void* (*fn)(void*));
	extern void piLock(int key);
	extern void piUnlock(int key);
	extern int piHiPri(const int pri);
	extern void         delay(unsigned int howLong);
	extern void         delayMicroseconds(unsigned int howLong);
	extern unsigned int millis(void);
	extern unsigned int micros(void);

#ifdef __cplusplus
}
#endif

#endif
