rmdir ".\output\@UNIF BASE" /s/q
rmdir ".\output\@UNIF Mehland Compat" /s/q
rmdir ".\output\@UNIF UN Faction" /s/q 

arma_mod_packing.exe --source "./src/@UNIF BASE" --destination "./output/@UNIF BASE" --pack
arma_mod_packing.exe --source "./src/@UNIF Mehland Compat" --destination "./output/@UNIF Mehland Compat" --pack
arma_mod_packing.exe --source "./src/@UNIF UN Faction" --destination "./output/@UNIF UN Faction" --pack
