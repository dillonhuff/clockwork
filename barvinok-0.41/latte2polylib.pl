#!/usr/bin/perl
use strict;

my $line = <>;
my ($r, $c) = split ' ', $line;
my @M;
for (1..$r) {
    $line = <>;
    chomp $line;
    my @v = split ' ', $line;
    push @v, $v[0];
    $v[0] = 1;
    push @M, [@v];
}
while (<>) {
    chomp;
    my @v = split;
    if ($v[0] eq 'linearity') {
	shift @v;
	shift @v;
	for (@v) {
	    $M[$_-1][0] = 0;
	}
    }
    elsif ($v[0] eq 'nonnegative') {
	shift @v;
	shift @v;
	for (@v) {
	    push @M, [1, map { ; 0 } (1..$c)];
	    $M[-1][$_] = 1;
	}
    }
}

print $#M+1, " ", $#{$M[0]}+1, "\n";
for (@M) {
    print join(' ', @$_), "\n";
}
