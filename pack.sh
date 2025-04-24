rm ".\output\@UNIF BASE"
rm ".\output\@UNIF Mehland Compat"
rm ".\output\@UNIF UN Faction" 

arma_mod_packing --source "./src/@UNIF BASE" --destination "./output/@UNIF BASE" --pack
arma_mod_packing --source "./src/@UNIF Mehland Compat" --destination "./output/@UNIF Mehland Compat" --pack
arma_mod_packing --source "./src/@UNIF UN Faction" --destination "./output/@UNIF UN Faction" --pack
