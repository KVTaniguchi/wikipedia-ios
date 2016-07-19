//  This header contains utils general macros that could be used accross the application.


#ifndef WMFUtilityMacros_h
#define WMFUtilityMacros_h

#define WMFReleaseOnExit __attribute__((__cleanup__(CFRelease)))

#endif /* WMFUtilityMacros_h */
