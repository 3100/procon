# describe Scheduling do
#   it "should be 3 when n=5, s=[1, 2, 4, 6, 8], t=[3, 5, 7, 9, 10]" do

#   end
# end

# require 'spec'

describe Array,  "when empty" do
  before do
    @empty_array = []
  end

  it "should be empty" do
    @empty_array.should be_empty
  end
  
  it "should size 0" do
    @empty_array.size.should == 0
  end
    
  after do
    @empty_array = nil
  end
end
