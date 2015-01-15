//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CCP {
    unsigned short _field1;
    unsigned int :4;
    unsigned int :4;
    unsigned char _field2;
    unsigned short _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned long long _field6;
};

struct established_evaluation_s {
    int _field1;
    unsigned int :1;
    unsigned int :1;
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct iovec {
    void *_field1;
    unsigned long long _field2;
};

struct path_evaluation_s {
    unsigned long long _field1;
    int _field2;
    int _field3;
    int _field4;
    unsigned char _field5;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
};

struct power_policy_s {
    struct power_policy_s *_field1;
    struct power_workload_policy_s *_field2;
    unsigned long long _field3;
};

struct power_workload_policy_s;

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

#pragma mark Typedef'd Unions

typedef union {
    struct sockaddr _field1;
    struct sockaddr_in _field2;
    struct sockaddr_in6 _field3;
} CDUnion_4a4a8072;
