Onecoin
=======

Onecoin is a Bitcoin fork that uses scrypt-jane as a proof of work scheme.

So far, these are the differences to Bitcoin:

* Maximal money amount is one coin (actually 0.999999999987 because of
  rounding).
* Scrypt-jane implementation from Yacoin. Currently only CPU mining
  is possible.
* 2 minutes block target.
* Difficulty retargets each block (PPCoin's implementation).
* Maximal block reward: 500 nano-OTC.
* The first 1000 blocks will have no reward, then the reward will 
  gradually grow up every 500 blocks to 500 nano-OTC during first 
  25500 blocks, and after that default rules will apply. This will
  ensure that the launch is fair. 
* TX fee: 10 pico-OTC.
* Subsidy is cut in half every 1000000 blocks, which will occur 
  approximately every 3.8 years.
* Decimal precision is changed from 8 digits to 18.
* Additional display units added to the QT client to make amounts 
  more readable: nOTC, pOTC, fOTC, aOTC.
* Default port: 8555 (18555 for testnet).
* Default RPC port: 8554 (18554 for testnet).

All credits go to the original developers of Bitcoin, Yacoin, PPCoin,
Novacoin.
