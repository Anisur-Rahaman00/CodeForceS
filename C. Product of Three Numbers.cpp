/*

 ALLAH IS ALMIGHTY              ******BISMILLAHIR RAHMANIR RAHIM.******              ALLAH IS ALMIGHTY
                                    ```````````````````````````````
                                        AUTHOR: ANISUR RAHAMAN
                                            BSMRSTU(SHIICT)
                                                ID:017

                                               !!!!!!!!
                                               !!!!!!!!
                                               !!!!!!!!
                                               !!!!!!!!
                                               !!!!!!!!
                                               !!!!!!!!
                                               !!!!!!!!
                                               !!!!!!!!
                                               !!!!!!!!
                                           ****!!!!!!!!****
                                            **************
                                             ************
                                              **********
                                               ********
                                                ******
                                                 ****
                                                  **

 _____________________________________________________________________________________________________
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
 `````````````````````````````````````````````````````````````````````````````````````````````````````
 ******                                                                                         ******
 *****                                                                                           *****
 ****                                                                                             ****
 ***                                                                                               ***
 **                                                                                                 **
 *                                                                                                   *
         $$$$$$$$$$$$$$         $$$$$$           $$$$$$$$    $$$$$$$$$$        $$$$$$$$$$$$$$$$
       $$$$$$$$$$$$$$$$$$       $$$$$$$           $$$$$$    $$$$$$$$$$$$      $$$$$$$$$$$$$$$$$$$
      $$$$$$$$$$$$$$$$$$$$      $$$$ $$$           $$$$    $$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$$$$
      $$$$            $$$$      $$$$  $$$          $$$$         $$$$         $$$$$
      $$$$            $$$$      $$$$   $$$         $$$$         $$$$         $$$$$
      $$$$            $$$$      $$$$    $$$        $$$$         $$$$         $$$$$
      $$$$     $$     $$$$      $$$$     $$$       $$$$         $$$$         $$$$$$$$$$$$$$$$$$
      $$$$$$$$$$$$$$$$$$$$      $$$$      $$$      $$$$         $$$$          $$$$$$$$$$$$$$$$$$
      $$$$$$$$$$$$$$$$$$$$      $$$$       $$$     $$$$         $$$$           $$$$$$$$$$$$$$$$$$
      $$$$            $$$$      $$$$        $$$    $$$$         $$$$                        $$$$$
      $$$$            $$$$      $$$$         $$$   $$$$         $$$$                        $$$$$
      $$$$            $$$$      $$$$          $$$  $$$$         $$$$                        $$$$$
      $$$$            $$$$      $$$$           $$$ $$$$    $$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$$$$
     $$$$$$          $$$$$$    $$$$$$           $$$$$$$     $$$$$$$$$$$$     $$$$$$$$$$$$$$$$$$$
    $$$$$$$$        $$$$$$$$  $$$$$$$$           $$$$$$      $$$$$$$$$$        $$$$$$$$$$$$$$$$

                            LETS START OUR JOURNEY...................

*/

#include<bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define pf push_front
#define in insert
#define ff first
#define ss second
#define off return 0
#define mp make_pair
#define MOD 1000000007
#define ll long long int
#define ld long double
#define cllr system("COLOR F5")
#define snll(a) scanf("%lld", &a)
#define snll2(a,b) scanf("%lld %lld", &a,&b)
#define snll3(a,b,c) scanf("%lld %lld %lld", &a,&b,&c)
#define snl(b) scanf("%d", &b)
#define snl2(a,b) scanf("%d %d", &a,&b)
#define snl3(a,b,c) scanf("%d %d %d", &a,&b,&c)
#define ptl(a) printf("%d\n", a)
#define ptll(a) printf("%lld\n", a)
#define ptl2(a,b) printf("%d %d\n", a,b)
#define ptll2(a,b) printf("%lld %lld\n", a,b)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define pi acos(-1)
#define C continue
#define B break
#define N '\n'
#define al(v) v.begin(),v.end()
#define srt(v) sort(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())
#define loop(i,a,n) for(ll i=a;i<n;i++)
using namespace std;
int n,T;
void divs()
{
    for (int a = 2; a * (a + 1) * (a + 2) <= n; a++)
        if (n % a == 0)
        {
            int num = n / a;
            for (int b = a + 1; b * (b + 1) <= num; b++)
                if (num % b == 0)
                {
                    int c = num / b;
                    printf("YES\n");
                    printf("%d %d %d\n", a, b, c);
                    return;
                }
        }
    cout << "NO" << N;
}
int main()
{
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        divs();    }
    off;
}
//system("COLOR F5");
/******************************************* THE END *************************************************/

