#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
int main()
{
    int v1 = 1, v2 = 1, u1 = 1, u2 = 1, b = 0, h = 0, n = 0;
	int s1,s2,s3,s4,p1,p2,p3,p4;
	cout << " game rules " << endl << " 101 means right add to right " << endl << " 102 means right add to left " << endl << " 201 means left add to right " << endl << " 202 means left add to left " << endl;  
	cout << "zero round " << endl << v1 << "     " << v2 << endl << u1 << "     " << u2 << endl;
	while ( v1 != 10 and v2 != 10 and u1 != 10 and u2 != 10){
		cin >> h;
		 srand((unsigned)time(0));
         b = rand()%4;
         if ( h == 101 ) {
         	s1 = v1 + u1;
		++n;
		if (s1 > 10) {
			v1 = s1 - 10;
		}
		else {
			v1 = s1;
		}
		
		 }
         if ( h == 102 ) {
         	s2 = v1 + u2;
		++n;
		if (s2 > 10) {
			v1 = s2 - 10;
		}
		else {
			v1 = s2;
		}
		
		 }
		 if ( h == 201 ) {
		s3 = v2 + u1;
		++n;
		if (s3 > 10) {
			v2 = s3 - 10;
		}
		else {
			v2 = s3;
		}
		
		 }
		 if ( h == 202 ) {
		s4 = v2 + u2;
		++n;
		if (s4 > 10) {
			v2 = s4 - 10;
		}
		else {
			v2 = s4;
		}
		
		 }
		 if ( v1+u1==10 or v1+u2==10 or v2+u1==10 or v2+u2==10)
		 {
		 if ( v1 + u1 == 10 ) {
		u1 = 10;
		}
		/*else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}
         */
		 if ( v2 + u1 == 10 ) {
		 u1 = 10;
		}	
		/*else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}*/
		 if ( v1 + u2 == 10 ) {
		 u2 = 10;
	     }
	    /* else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}*/
	     if ( v2 + u2 == 10 ) {
		 u2 = 10;
	}
	     /*else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}*/
     }
		else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}

		 {
		if ( v1 <= 0 ) {
     	v1 = v1 + 10;
	 }
	      if ( v2 <= 0 ) {
     	v2 = v2 + 10;
	 }
	      if ( u1 <= 0 ) {
     	u1 = u1 + 10;
	 }
	      if ( u2 <= 0 ) {
     	u2 = u2 + 10;
	 }
		 cout << " the " << n/2 << "th " << " round " <<endl;
         cout << u1 << "     " << u2 << endl << v1 << "     " << v2 << endl;}
         }
    while ( v1 == 10 and v2 != 10 and u1 != 10 and u2 != 10){
		 srand((unsigned)time(0));
		 int o;
         o = rand()%2;
         b = 2*o+1;
         	cin >> h;
         {
	     if ( h == 101 ) {
         	s1 = v1 + u1;
		++n;
		if (s1 > 10) {
			v1 = s1 - 10;
		}
		else {
			v1 = s1;
		}
		
		 }
         if ( h == 102 ) {
         	s2 = v1 + u2;
		++n;
		if (s2 > 10) {
			v1 = s2 - 10;
		}
		else {
			v1 = s2;
		}
		
		 }
		 if ( h == 201 ) {
		s3 = v2 + u1;
		++n;
		if (s3 > 10) {
			v2 = s3 - 10;
		}
		else {
			v2 = s3;
		}
		
		 }
		 if ( h == 202 ) {
		s4 = v2 + u2;
		++n;
		if (s4 > 10) {
			v2 = s4 - 10;
		}
		else {
			v2 = s4;
		}
		
		 }
		 if ( v1+u1==10 or v1+u2==10 or v2+u1==10 or v2+u2==10)
		 {
		 if ( v1 + u1 == 10 ) {
		u1 = 10;
		}
		/*else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}
         */
		 if ( v2 + u1 == 10 ) {
		 u1 = 10;
		}	
		/*else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}*/
		 if ( v1 + u2 == 10 ) {
		 u2 = 10;
	     }
	    /* else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}*/
	     if ( v2 + u2 == 10 ) {
		 u2 = 10;
	}
	     /*else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}*/
     }
		else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}
}
{
		if ( v1 <= 0 ) {
     	v1 = v1 + 10;
	 }
	      if ( v2 <= 0 ) {
     	v2 = v2 + 10;
	 }
	      if ( u1 <= 0 ) {
     	u1 = u1 + 10;
	 }
	      if ( u2 <= 0 ) {
     	u2 = u2 + 10;
	 }
		 cout << " the " << n/2 << "th " << " round " <<endl;
         cout << u1 << "     " << u2 << endl << v1 << "     " << v2 << endl;}
}
	while ( v2 == 10 and v1 != 10 and u1 != 10 and u2 != 10){
		 srand((unsigned)time(0));
		 int o;
         b = 2*o;
         	cin >> h;
         {
		 if ( h == 101 ) {
         	s1 = v1 + u1;
		++n;
		if (s1 > 10) {
			v1 = s1 - 10;
		}
		else {
			v1 = s1;
		}
		
		 }
         if ( h == 102 ) {
         	s2 = v1 + u2;
		++n;
		if (s2 > 10) {
			v1 = s2 - 10;
		}
		else {
			v1 = s2;
		}
		
		 }
		 if ( h == 201 ) {
		s3 = v2 + u1;
		++n;
		if (s3 > 10) {
			v2 = s3 - 10;
		}
		else {
			v2 = s3;
		}
		
		 }
		 if ( h == 202 ) {
		s4 = v2 + u2;
		++n;
		if (s4 > 10) {
			v2 = s4 - 10;
		}
		else {
			v2 = s4;
		}
		
		 }
		 if ( v1+u1==10 or v1+u2==10 or v2+u1==10 or v2+u2==10)
		 {
		 if ( v1 + u1 == 10 ) {
		u1 = 10;
		}
		/*else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}
         */
		 if ( v2 + u1 == 10 ) {
		 u1 = 10;
		}	
		/*else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}*/
		 if ( v1 + u2 == 10 ) {
		 u2 = 10;
	     }
	    /* else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}*/
	     if ( v2 + u2 == 10 ) {
		 u2 = 10;
	}
	     /*else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}*/
     }
		else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}
}
{
		if ( v1 <= 0 ) {
     	v1 = v1 + 10;
	 }
	      if ( v2 <= 0 ) {
     	v2 = v2 + 10;
	 }
	      if ( u1 <= 0 ) {
     	u1 = u1 + 10;
	 }
	      if ( u2 <= 0 ) {
     	u2 = u2 + 10;
	 }
		 cout << " the " << n/2 << "th " << " round " <<endl;
         cout << u1 << "     " << u2 << endl << v1 << "     " << v2 << endl;}
}
	while ( u1 == 10 and v1 != 10 and v2 != 10 and u2 != 10){
		 srand((unsigned)time(0));
		 int o;
         o = rand()%2;
         b = o + 2;
        cin >> h;
         {
		 if ( h == 101 ) {
         	s1 = v1 + u1;
		++n;
		if (s1 > 10) {
			v1 = s1 - 10;
		}
		else {
			v1 = s1;
		}
		
		 }
         if ( h == 102 ) {
         	s2 = v1 + u2;
		++n;
		if (s2 > 10) {
			v1 = s2 - 10;
		}
		else {
			v1 = s2;
		}
		
		 }
		 if ( h == 201 ) {
		s3 = v2 + u1;
		++n;
		if (s3 > 10) {
			v2 = s3 - 10;
		}
		else {
			v2 = s3;
		}
		
		 }
		 if ( h == 202 ) {
		s4 = v2 + u2;
		++n;
		if (s4 > 10) {
			v2 = s4 - 10;
		}
		else {
			v2 = s4;
		}
		
		 }
		 if ( v1+u1==10 or v1+u2==10 or v2+u1==10 or v2+u2==10)
		 {
		 if ( v1 + u1 == 10 ) {
		u1 = 10;
		}
		/*else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}
         */
		 if ( v2 + u1 == 10 ) {
		 u1 = 10;
		}	
		/*else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}*/
		 if ( v1 + u2 == 10 ) {
		 u2 = 10;
	     }
	    /* else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}*/
	     if ( v2 + u2 == 10 ) {
		 u2 = 10;
	}
	     /*else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}*/
     }
		else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}
}
{
		if ( v1 <= 0 ) {
     	v1 = v1 + 10;
	 }
	      if ( v2 <= 0 ) {
     	v2 = v2 + 10;
	 }
	      if ( u1 <= 0 ) {
     	u1 = u1 + 10;
	 }
	      if ( u2 <= 0 ) {
     	u2 = u2 + 10;
	 }
		 cout << " the " << n/2 << "th " << " round " <<endl;
         cout << u1 << "     " << u2 << endl << v1 << "     " << v2 << endl;}
}
	while ( u2 == 10 and v1 != 10 and u1 != 10 and v2 != 10){
		 srand((unsigned)time(0));
		 int o;
         o = rand()%2;
         b = o;
        cin >> h;
         {
		 if ( h == 101 ) {
         	s1 = v1 + u1;
		++n;
		if (s1 > 10) {
			v1 = s1 - 10;
		}
		else {
			v1 = s1;
		}
		
		 }
         if ( h == 102 ) {
         	s2 = v1 + u2;
		++n;
		if (s2 > 10) {
			v1 = s2 - 10;
		}
		else {
			v1 = s2;
		}
		
		 }
		 if ( h == 201 ) {
		s3 = v2 + u1;
		++n;
		if (s3 > 10) {
			v2 = s3 - 10;
		}
		else {
			v2 = s3;
		}
		
		 }
		 if ( h == 202 ) {
		s4 = v2 + u2;
		++n;
		if (s4 > 10) {
			v2 = s4 - 10;
		}
		else {
			v2 = s4;
		}
		
		 }
		 if ( v1+u1==10 or v1+u2==10 or v2+u1==10 or v2+u2==10)
		 {
		 if ( v1 + u1 == 10 ) {
		u1 = 10;
		}
		/*else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}
         */
		 if ( v2 + u1 == 10 ) {
		 u1 = 10;
		}	
		/*else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}*/
		 if ( v1 + u2 == 10 ) {
		 u2 = 10;
	     }
	    /* else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}*/
	     if ( v2 + u2 == 10 ) {
		 u2 = 10;
	}
	     /*else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}*/
     }
		else {
     	if ( b == 0 ) {
     		p1 = v1 + u1;
		++n;
		if (p1 > 10) {
			u1 = p1 - 10;
		}
		else {
			u1 = p1;
		}
		 }
	    if ( b == 1 ) {
     		p2 = v2 + u1;
		++n;
		if (p1 > 10) {
			u1 = p2 - 10;
		}
		else {
			u1 = p2;
		}
		}
        if ( b == 2 ) {
     		p3 = v1 + u2;
		++n;
		if (p3 > 10) {
			u2 = p3 - 10;
		}
		else {
			u2 = p3;
		}
	}
		if ( b == 3 ) {
     		p4 = v2 + u2;
		++n;
		if (p4 > 10) {
			u2 = p4 - 10;
		}
		else {
			u2 = p4;
		}
	}
}
}
{
		if ( v1 <= 0 ) {
     	v1 = v1 + 10;
	 }
	      if ( v2 <= 0 ) {
     	v2 = v2 + 10;
	 }
	      if ( u1 <= 0 ) {
     	u1 = u1 + 10;
	 }
	      if ( u2 <= 0 ) {
     	u2 = u2 + 10;
	 }
		 cout << " the " << n/2 << "th " << " round " <<endl;
         cout << u1 << "     " << u2 << endl << v1 << "     " << v2 << endl;}
}
    if ( v1 == 10 and v2 == 10 ) {
    	cout << " you are the winner " << endl << " the game last for " << n/2 << " rounds " << endl;  
    	return 0;
	}
	if ( u1 == 10 and u2 == 10 ) {
    	cout << " you are the loser " << endl << " the game last for " << n/2 << " rounds " << endl;  
    	return 0;
	}
 }
		 
		 
		 
