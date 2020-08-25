export TEXINPUTS := $(srcdir):$(TEXINPUTS)
export BIBINPUTS := $(srcdir):$(BIBINPUTS)
export BSTINPUTS := $(srcdir):$(BSTINPUTS)

CLEANFILES = \
	applications.aux \
	barvinok.aux \
	barvinok.bbl \
	barvinok.blg \
	barvinok.brf \
	barvinok.dvi \
	barvinok.glo \
	barvinok.gls \
	barvinok.glx \
	barvinok.gxg \
	barvinok.gxs \
	barvinok.idx \
	barvinok.ilg \
	barvinok.ind \
	barvinok.lof \
	barvinok.log \
	barvinok.out \
	barvinok.pdf \
	barvinok.ps \
	barvinok.toc \
	implementation.aux \
	Internal.aux \
	isl.aux \
	polymake.aux \
	reports.aux \
	version.tex

barvinok.dvi: FORCE
	(cd ..; echo "@GIT_HEAD_VERSION@") > version.tex
	latex barvinok.tex
	bibtex barvinok
	makeindex barvinok.idx
	makeindex barvinok.glo -o barvinok.gls -s nomencl.ist
	glosstex barvinok.aux $(srcdir)/barvinok.gdf
	makeindex barvinok.gxs -o barvinok.glx -s $(srcdir)/glosstex.ist
	latex barvinok.tex
	latex barvinok.tex

barvinok.pdf: barvinok.dvi
	dvips -Ppdf barvinok.dvi
	ps2pdf barvinok.ps

FORCE:
