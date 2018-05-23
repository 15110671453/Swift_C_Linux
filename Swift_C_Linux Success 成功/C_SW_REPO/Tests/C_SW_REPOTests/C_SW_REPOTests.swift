import XCTest
@testable import C_SW_REPO

class C_SW_REPOTests: XCTestCase {
    func testExample() {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct
        // results.
        XCTAssertEqual(C_SW_REPO().text, "Hello, World!")
    }


    static var allTests = [
        ("testExample", testExample),
    ]
}
