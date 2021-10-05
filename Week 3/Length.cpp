#include "Length.h"

Length operator+ (Length a, Length b)
{
	return Length(a.len_inches + b.len_inches);
}