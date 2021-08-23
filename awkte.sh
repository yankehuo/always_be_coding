echo "Please input scaling factor"
read -a SF
echo $SF


#echo $SF
#SF2=$(($SF+1))
#echo $SF2

#awk '{print $1,$2*$SF,$3*$SF,$4*$SF}' vasprun.xml  > vaspt
awk '{print $1,$2*"'$SF'",$3*$SF,$4*$SF}' vasprun.xml  > vaspt


awk 'BEGIN{i=1} /imag/,\
                /\/imag/ \
                 {a[i]=$2 ; b[i]=$3 ; c[i]=$4; d[i]=$5 ; e[i]=$6 ; f[i]=$7; g[i]=$8; i=i+1} \
     END{for (j=1;j<i-3;j++) print a[j],b[j],c[j],d[j],e[j],f[j],g[j]}' vasprun.xml > IMAG.ORG
awk '{print $1,$2*$SF,$3*$SF,$4*$SF}' IMAG.ORG >IMAG.RESTORED

awk 'BEGIN{i=1} /real/,\
                /\/real/ \
                 {a[i]=$2 ; b[i]=$3 ; c[i]=$4; d[i]=$5 ; e[i]=$6 ; f[i]=$7; g[i]=$8; i=i+1} \
     END{for (j=1;j<i-3;j++) print a[j],b[j],c[j],d[j],e[j],f[j],g[j]}' vasprun.xml > REAL.ORG
awk '{print $1,($2-1)*$SF+1,($3-1)*$SF+1,($4-1)*$SF+1}' REAL.ORG >REAL.RESTORED
