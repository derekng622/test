#include <stdio.h>

float VolumeOfTaper( float radius, float height )
{
    return 3.1416f * radius * radius * height / 3.0f;
}

int main(void)
{
    printf( "Hello git!\n" );
    printf( "The volume of taper is %f\n",
            VolumeOfTaper( 10.0f, 5.0f ) );
    return 0;
}
