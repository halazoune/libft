# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 18:00:49 by ncoden            #+#    #+#              #
#    Updated: 2015/08/18 16:46:29 by ncoden           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# DEPENDENCIES

# **************************************************************************** #

NAME = libft.a

# COMPILATION
CC = gcc
CCFLAGS = -Wall -Werror -Wextra

ASM = nasm
ASMFLAGS = -f macho64

LNK = gcc
LNKFLAGS =

# DIRECTORIES
SRCDIR = src
OBJDIR = obj
INCDIR = includes

# SOURCES
SRC =\
	basics/arrays/ft_arraylen.c\
	basics/arrays/ft_arraytolst.c\
	basics/bits/ft_bitget.c\
	basics/bits/ft_bitset.c\
	basics/chars/check/ft_chrpos.c\
	basics/chars/check/ft_chrswitch.c\
	basics/chars/check/ft_isalnum.s\
	basics/chars/check/ft_isalpha.s\
	basics/chars/check/ft_isascii.s\
	basics/chars/check/ft_isdigit.s\
	basics/chars/check/ft_isprint.s\
	basics/chars/output/ft_putchr.s\
	basics/chars/output/ft_putchr_fd.s\
	basics/chars/output/ft_putnchr.c\
	basics/chars/output/ft_putnchr_fd.c\
	basics/chars/output/ft_putspace.c\
	basics/chars/transform/ft_tolower.s\
	basics/chars/transform/ft_toupper.s\
	basics/memory/create/ft_memalloc.c\
	basics/memory/create/ft_memdup.c\
	basics/memory/create/ft_memsub.c\
	basics/memory/delete/ft_memdel.c\
	basics/memory/iterate/ft_memchr.c\
	basics/memory/iterate/ft_memcmp.c\
	basics/memory/iterate/ft_memequ.c\
	basics/memory/iterate/ft_memlen.c\
	basics/memory/transform/ft_bzero.s\
	basics/memory/transform/ft_memccpy.c\
	basics/memory/transform/ft_memcpy.s\
	basics/memory/transform/ft_memmove.c\
	basics/memory/transform/ft_memset.s\
	basics/numbers/integers/ft_atoi.c\
	basics/numbers/integers/ft_itoa.c\
	basics/numbers/integers/ft_nbrbaselen.c\
	basics/numbers/integers/ft_nbrlen.c\
	basics/numbers/integers/ft_putnbr.s\
	basics/numbers/integers/ft_putnbr_fd.s\
	basics/numbers/integers/ft_putnbrbase.c\
	basics/numbers/integers/ft_putnbrdigits.c\
	basics/numbers/integers/ft_putnbrhex.c\
	basics/numbers/integers/ft_putnbrleft.c\
	basics/numbers/integers/ft_putnbrright.c\
	basics/numbers/llongs/ft_llongbaselen.c\
	basics/numbers/llongs/ft_llonglen.c\
	basics/numbers/llongs/ft_putllong.c\
	basics/numbers/llongs/ft_putllongbase.c\
	basics/numbers/llongs/ft_putllongdigits.c\
	basics/numbers/llongs/ft_putllonghex.c\
	basics/numbers/pointers/ft_ptrbaselen.c\
	basics/numbers/pointers/ft_ptrlen.c\
	basics/numbers/pointers/ft_putptrbase.c\
	basics/numbers/pointers/ft_putptrdigits.c\
	basics/numbers/pointers/ft_putptrhex.c\
	basics/numbers/ullong/ft_putullong.c\
	basics/numbers/ullong/ft_putullongbase.c\
	basics/numbers/ullong/ft_putullongdigits.c\
	basics/numbers/ullong/ft_putullonghex.c\
	basics/numbers/ullong/ft_ullongbaselen.c\
	basics/numbers/ullong/ft_ullonglen.c\
	basics/strings/create/ft_strdiv.c\
	basics/strings/create/ft_strdjoin.c\
	basics/strings/create/ft_strdup.s\
	basics/strings/create/ft_strjoin.c\
	basics/strings/create/ft_strlstjoin.c\
	basics/strings/create/ft_strmap.c\
	basics/strings/create/ft_strmapi.c\
	basics/strings/create/ft_strnew.c\
	basics/strings/create/ft_strsplit.c\
	basics/strings/create/ft_strsplit_tolst.c\
	basics/strings/create/ft_strsub.c\
	basics/strings/create/ft_strtrim.c\
	basics/strings/delete/ft_strdel.c\
	basics/strings/iterate/ft_strccmp.c\
	basics/strings/iterate/ft_strchr.c\
	basics/strings/iterate/ft_strcmp.c\
	basics/strings/iterate/ft_strequ.c\
	basics/strings/iterate/ft_striter.c\
	basics/strings/iterate/ft_striteri.c\
	basics/strings/iterate/ft_strlen.s\
	basics/strings/iterate/ft_strncmp.c\
	basics/strings/iterate/ft_strnequ.c\
	basics/strings/iterate/ft_strnlen.c\
	basics/strings/iterate/ft_strnstr.c\
	basics/strings/iterate/ft_strrchr.c\
	basics/strings/iterate/ft_strstr.c\
	basics/strings/output/ft_putendl.c\
	basics/strings/output/ft_putendl_fd.c\
	basics/strings/output/ft_putistr.c\
	basics/strings/output/ft_putnstr.c\
	basics/strings/output/ft_putstr.s\
	basics/strings/output/ft_putstr_fd.s\
	basics/strings/output/ft_putstrleft.c\
	basics/strings/output/ft_putstrright.c\
	basics/strings/transform/ft_strcat.s\
	basics/strings/transform/ft_strccpy.c\
	basics/strings/transform/ft_strclr.c\
	basics/strings/transform/ft_strcpy.s\
	basics/strings/transform/ft_stricpy.c\
	basics/strings/transform/ft_strlcat.c\
	basics/strings/transform/ft_strncat.c\
	basics/strings/transform/ft_strncpy.c\
	basics/types/ft_sdatanew.c\
	basics/types/ft_tdatanew.c\
	containers/ilst/ft_ilstadd.c\
	containers/ilst/ft_ilstcrush.c\
	containers/ilst/ft_ilstdelone.c\
	containers/ilst/ft_ilstfill.c\
	containers/ilst/ft_ilstfill__.c\
	containers/ilst/ft_ilstget.c\
	containers/ilst/ft_ilstinsert.c\
	containers/ilst/ft_ilstinsert__.c\
	containers/ilst/ft_ilstmerge.c\
	containers/ilst/ft_ilstnew.c\
	containers/ilst/ft_ilstnew__.c\
	containers/ilst/ft_ilstprev.c\
	containers/ilst/ft_ilstpush.c\
	containers/ilst/ft_ilstpush__.c\
	containers/ilst/ft_ilstrem.c\
	containers/ilst/ft_ilstset.c\
	containers/klst/ft_klstadd.c\
	containers/klst/ft_klstcrush.c\
	containers/klst/ft_klstdelone.c\
	containers/klst/ft_klstget.c\
	containers/klst/ft_klstinsert.c\
	containers/klst/ft_klstinsert__.c\
	containers/klst/ft_klstmerge.c\
	containers/klst/ft_klstnew.c\
	containers/klst/ft_klstnew__.c\
	containers/klst/ft_klstprev.c\
	containers/klst/ft_klstpush.c\
	containers/klst/ft_klstpush__.c\
	containers/klst/ft_klstrem.c\
	containers/klst/ft_klstset.c\
	containers/list/ft_lstaddafter.c\
	containers/list/ft_lstaddback.c\
	containers/list/ft_lstaddby.c\
	containers/list/ft_lstaddfront.c\
	containers/list/ft_lstaddrby.c\
	containers/list/ft_lstccpy_tostr.c\
	containers/list/ft_lstcpy_tostr.c\
	containers/list/ft_lstdel.c\
	containers/list/ft_lstdelone.c\
	containers/list/ft_lstdup.c\
	containers/list/ft_lstdup__.c\
	containers/list/ft_lstfold.c\
	containers/list/ft_lstget.c\
	containers/list/ft_lstiter.c\
	containers/list/ft_lstlen.c\
	containers/list/ft_lstmap.c\
	containers/list/ft_lstnew.c\
	containers/list/ft_lstnew__.c\
	containers/list/ft_lstpushafter.c\
	containers/list/ft_lstpushback.c\
	containers/list/ft_lstpushback__.c\
	containers/list/ft_lstpushby.c\
	containers/list/ft_lstpushfront.c\
	containers/list/ft_lstpushfront__.c\
	containers/list/ft_lstpushrby.c\
	containers/list/ft_lstshift.c\
	containers/list/ft_lsttoarray.c\
	containers/pair/ft_cpairnew.c\
	containers/pair/ft_fpairnew.c\
	containers/pair/ft_npairnew.c\
	containers/pair/ft_pairdel.c\
	containers/pair/ft_pairnew.c\
	containers/stack/ft_stckclr.c\
	containers/stack/ft_stckenter.c\
	containers/stack/ft_stckget.c\
	containers/stack/ft_stckhead.c\
	containers/stack/ft_stckilstget.c\
	containers/stack/ft_stckiter.c\
	containers/stack/ft_stckleave.c\
	containers/stack/ft_stcknew.c\
	containers/stack/ft_stckpull.c\
	containers/stack/ft_stckpush.c\
	containers/stack/ft_stcksrc.c\
	containers/stack/ft_stckuntil.c\
	containers/stack/ft_stckwhile.c\
	containers/tree/ft_mtaddchild.c\
	containers/tree/ft_mtaddnext.c\
	containers/tree/ft_mtnew.c\
	containers/tree/ft_mtnew__.c\
	containers/tree/ft_mtpushchild.c\
	containers/tree/ft_mtpushnext.c\
	system/environment/ft_envget.c\
	system/memory/ft_getendian.c\
	system/signals/ft_sgnlclr.c\
	system/signals/ft_sgnlclrone.c\
	system/signals/ft_sgnlcrush.c\
	system/signals/ft_sgnldel.c\
	system/signals/ft_sgnldelone.c\
	system/signals/ft_sgnlesrcget.c\
	system/signals/ft_sgnlesrcset.c\
	system/signals/ft_sgnlget.c\
	system/signals/ft_sgnlhook.c\
	system/signals/ft_sgnllisten.c\
	system/signals/ft_sgnlpull.c\
	system/signals/ft_sgnlpush.c\
	system/signals/ft_sgnlset.c\
	system/signals/ft_sgnltrigger.c\
	system/signals/ft_sgnlunset.c\
	system/termcaps/ft_putchr_trm.c\
	system/termcaps/ft_putstr_trm.c\
	system/termcaps/ft_read_trm.c\
	system/termcaps/ft_tpskeytrigger.c\
	system/termcaps/ft_trmclosein.c\
	system/termcaps/ft_trmcloseout.c\
	system/termcaps/ft_trmclr.c\
	system/termcaps/ft_trmgetcmd.c\
	system/termcaps/ft_trmgetin.c\
	system/termcaps/ft_trmgetout.c\
	system/termcaps/ft_trmheight.c\
	system/termcaps/ft_trmkeycmd.c\
	system/termcaps/ft_trmkeyhook.c\
	system/termcaps/ft_trmnew.c\
	system/termcaps/ft_trmputcmd.c\
	system/termcaps/ft_trmread.c\
	system/termcaps/ft_trmrestore.c\
	system/termcaps/ft_trmset.c\
	system/termcaps/ft_trmsignalcmd.c\
	system/termcaps/ft_trmsignalhook.c\
	system/termcaps/ft_trmstart.c\
	system/termcaps/ft_trmstop.c\
	system/termcaps/ft_trmwidth.c\
	utils/errors/ft_errdel.c\
	utils/errors/ft_errnew.c\
	utils/events/ft_esrccall.c\
	utils/events/ft_esrcget.c\
	utils/events/ft_esrcrem.c\
	utils/events/ft_esrcset.c\
	utils/events/ft_evntcall.c\
	utils/events/ft_evntnew.c\
	utils/events/ft_evntset.c\
	utils/events/ft_iesrcstrigger.c\
	utils/events/ft_iesrctrigger.c\
	utils/events/ft_ievnttrigger.c\
	utils/events/ft_kesrcstrigger.c\
	utils/events/ft_kesrctrigger.c\
	utils/events/ft_kevnttrigger.c\
	utils/file/ft_putfile.s\
	utils/file/ft_readline.c\
	utils/file/ft_readtoarray.c\
	utils/file/ft_readtolst.c\
	utils/math/ft_degtorad.c\
	utils/math/ft_max.c\
	utils/math/ft_min.c\
	utils/math/ft_power.c\
	utils/math/ft_radtodeg.c\
	utils/parse/ft_prschr.c\
	utils/parse/ft_prschrs.c\
	utils/parse/ft_prsichrs.c\
	utils/parse/ft_prsnbr.c\
	utils/parse/ft_prsstr.c\
	utils/parse/ft_prsxchrs.c\
	utils/parse/ft_skpnbr.c\
	utils/unicode/ft_getunicode.c\
	utils/unicode/ft_setunicode.c\
	utils/unicode/utf8/ft_putnbwstr_utf8.c\
	utils/unicode/utf8/ft_putnwstr_utf8.c\
	utils/unicode/utf8/ft_putwchr_utf8.c\
	utils/unicode/utf8/ft_putwstr_utf8.c\
	utils/unicode/utf8/ft_utf8chrencode.c\
	utils/unicode/utf8/ft_utf8chrsize.c\
	utils/unicode/utf8/ft_utf8encode.c\
	utils/unicode/utf8/ft_utf8wencode.c\
	utils/unicode/utf8/ft_wchrsize_utf8.c\
	utils/unicode/utf8/ft_wstrnsize_utf8.c\
	utils/unicode/utf8/ft_wstrsize_utf8.c\
	utils/unicode/wchr/ft_putwchr.c\
	utils/unicode/wchr/ft_wchrbin.c\
	utils/unicode/wchr/ft_wchrsize.c\
	utils/unicode/wstr/ft_putnbwstr.c\
	utils/unicode/wstr/ft_putnwstr.c\
	utils/unicode/wstr/ft_putwstr.c\
	utils/unicode/wstr/ft_wstrnsize.c\
	utils/unicode/wstr/ft_wstrsize.c

# **************************************************************************** #

# ALLOWED EXTENSIONS
EXTENSIONS = .c .s

# SPECIAL CHARS
LOG_CLEAR		= \033[2K
LOG_UP 			= \033[A
LOG_NOCOLOR		= \033[0m
LOG_BLACK		= \033[1;30m
LOG_RED			= \033[1;31m
LOG_GREEN		= \033[1;32m
LOG_YELLOW		= \033[1;33m
LOG_BLUE		= \033[1;34m
LOG_VIOLET		= \033[1;35m
LOG_CYAN		= \033[1;36m
LOG_WHITE		= \033[1;37m

# **************************************************************************** #

.PHONY: all $(NAME) build clean fclean re
.SILENT:

SRC := $(filter $(addprefix %, $(EXTENSIONS)), $(SRC))
SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJS = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(basename $(SRC))))
OBJS_DIRS = $(sort $(dir $(OBJS)))

INCS_DIRS = $(addsuffix /, $(INCDIR))
INCS = $(addprefix -I , $(INCS_DIRS))

all: $(NAME)
$(NAME): build $(LIBS) $(OBJS)
	echo "$(LOG_CLEAR)$(NAME)... $(LOG_YELLOW)assembling...$(LOG_NOCOLOR)$(LOG_UP)"
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	echo "$(LOG_CLEAR)$(NAME)... compiled $(LOG_GREEN)✓$(LOG_NOCOLOR)"
build:
	mkdir -p $(OBJDIR)
	mkdir -p $(OBJS_DIRS)
clean:
	rm -f $(LIBS)
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	echo "$(LOG_CLEAR)$(NAME)... $(LOG_YELLOW)$<$(LOG_NOCOLOR)$(LOG_UP)"
	$(CC) -c -o $@ $< $(INCS) $(CCFLAGS)
$(OBJDIR)/%.o: $(SRCDIR)/%.s
	echo "$(LOG_CLEAR)$(NAME)... $(LOG_YELLOW)$<$(LOG_NOCOLOR)$(LOG_UP)"
	$(ASM) -o $@ $< $(INCS) $(ASMFLAGS)
