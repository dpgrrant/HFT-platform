resource "aws_instance" "hft_server" {
  ami           = "ami-0c55b159cbfafe1f0" # Example Amazon Linux 2 AMI, update as needed
  instance_type = "c5.large"

  tags = {
    Name = "HFTServer"
  }
}
