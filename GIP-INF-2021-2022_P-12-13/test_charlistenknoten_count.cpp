// Datei: test_charlistenknoten_count.cpp

#include "catch.h"

#include "CharListenKnoten.h"

TEST_CASE("Pruefung des CharListenKnoten Zaehlers")
{
	int old_count = CharListenKnoten::object_count;
	{
		CharListenKnoten k1('a'), k2('b');

		REQUIRE(old_count + 2 == CharListenKnoten::object_count);
	}

	REQUIRE(old_count == CharListenKnoten::object_count);
}

