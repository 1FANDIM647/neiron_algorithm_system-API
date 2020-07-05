from bs4 import BeautifulSoup
import requests

def parse():
	URL= 'https://www.olx.ua/elektronika/kompyutery-i-komplektuyuschie/'
	HEADERS = {

      'User-Agent':''#put your user-agent here 


	}

	response = requests.get(URL ,headers =HEADERS )
	soup = BeautifulSoup(response.content,'html.parser')
	items = soup.findAll('div',class_ = "space rel" )
	comps =[]
	for item in items:
		comps.append({
			'title':item.find('a',class_='marginright5 link linkWithHash detailLink')
			})
		for comp in comps:
			print(comp['title'])



parse()
