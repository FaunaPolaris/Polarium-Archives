#ifndef STRINGS_H
#define STRINGS_H

//	read
//		information gathering
size_t	str_len(const char *str);
t_bool	str_scrySigil(const char *str, char sgl);
t_bool	str_scryString(const char *str, const char *string);
char	*str_divineString(const char *str, const char *string);
char	*str_divineSigil(const char *str, char sigil);
int		str_discernSigil(char *str, char sigil);

//		Conjure new strings
char	*str_clone(const char *str);
char	*str_mimic(const char *str, size_t mimic_len);
char	*str_mimicSigil(const char *str, char sigil);

//		sunder strings
char	**str_sunderSigil(char *str, char sigil, int banish);
char	**str_insunderSigil(char *str, char sigil, int banish);

// write

// allocate

#endif
