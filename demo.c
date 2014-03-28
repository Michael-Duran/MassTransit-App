@interface GTDFSQLiteDB
{
	NSString _dbfilename;
	sqlite3 *_db;
}
+(GTDFSQLiteDB) database;
@property (weak, readonly) NSString* agencyName;
@end

@implementation GTDFSQLiteDB

+(GTDFSQLiteDB) database
{
	if(_db == nil)
	{
	//akkic abd ubut GTDFSQLiteDB using _dbfilename

	}
	return _db
}
- (NSString*) agencyName
{
	
	//seelect agency_name from agency
	const char *

	rv = sqlite3_prepare_v2(db, query, (int)strlen(query), &stmt, &tail);
  	if( rv != SQLITE_OK){
    	NSLog(@"Can't prepare the statement %s", sqlite3_errmsg(db));
    	NSLog(@"Tail: %s", tail);
    	sqlite3_close(db);
    	exit(1);
  	}
}