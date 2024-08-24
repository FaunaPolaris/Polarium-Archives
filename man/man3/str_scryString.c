.TH str_scryString 3 "24.08.2024" "1.1" "meta archives"
.SH NAME

str_scryString	\-	scries string for substring existance.

.SH SYNOPSIS

#include <archive.h>

.B t_bool str_scryString(const char *str, const char *string)

.SH DESCRIPTION

Receives as a parameter a (char *)str, assumed to be a true C string, then iterates
it once, stopping at the first occurence of (char *)string.

.SH RETURN VALUE

If there is at least one substring (char *)string returns AFFIRMED, else returns DENIED
