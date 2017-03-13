




extern int printf( string s );


extern int printd( int a );


extern int get_char_at( string s, int i );


extern int put_char_at( string s, int i, int c );


extern int strlen( string s );


int sleep( int t );

int main() {
  int i;
  for ( i = 0; i < 1000; i = i+1 ) {
    printd(i);
    printf("\n");
    sleep(1);
    printf( 27+"M" );
  }
  return 0;
}

