// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2013 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "core.h"

int64 nChainStartTime = 1371119462;

// Onecoin: increasing Nfactor gradually
unsigned char GetNfactor(int64 nTimestamp)
{
    int64 delta = nTimestamp - nChainStartTime;
    if (delta < 0)
        return 6;
    double days = (double)delta / 24 / 60 / 60;
    unsigned char Nfactor = floor(log10(days + 100) * 10 - 14);
    if (Nfactor > 30)
        return 30;
    return Nfactor;
}
