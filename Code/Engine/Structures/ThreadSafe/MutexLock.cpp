#include "Engine/Structures/ThreadSafe/MutexLock.hpp"

//---------------------------------------------------------------------------------------------------------------------------
//STRUCTORS
//---------------------------------------------------------------------------------------------------------------------------
MutexLock::MutexLock() {
	InitializeCriticalSection(&cs);
}
MutexLock::~MutexLock() {
	DeleteCriticalSection(&cs);
}

//---------------------------------------------------------------------------------------------------------------------------
//LOCK UNLOCKING
//---------------------------------------------------------------------------------------------------------------------------
void MutexLock::Lock() {
	EnterCriticalSection(&cs);
}
void MutexLock::Unlock() {
	LeaveCriticalSection(&cs);
}